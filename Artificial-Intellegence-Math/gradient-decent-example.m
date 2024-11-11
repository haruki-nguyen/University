% Function and Gradient Definition
f = @(x1, x2) 2*x1^2 + x2^2 + x1*x2;
grad_f = @(x1, x2) [4*x1 + x2; x1 + 2*x2]; % Gradient of f

% Parameters
X = [0.5; 1];  % Initial point
eta = 0.5;     % Learning rate
epsilon_2 = 1e-6; % Stopping criterion for gradient

% Gradient Descent Loop
max_iter = 1000;
for i = 1:max_iter
    grad = grad_f(X(1), X(2)); % Compute gradient at current point
    if norm(grad) <= epsilon_2
        break; % Stop if gradient is small
    end
    X = X - eta * grad; % Update X
end

% Output result
disp('Optimal point:')
disp(X)
disp('Function value at optimal point:')
disp(f(X(1), X(2)))
